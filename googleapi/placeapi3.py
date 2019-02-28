# Some practice for GOOGLE PLACE API
# Load keywords from csv file and send query to GOOGLE PLACE API
# Get formatted address and rating


import requests
import json
import csv


# Get key words
places = []
with open('locations.csv', newline='') as csvfile:
    reader = csv.DictReader(csvfile, delimiter=',')
    for row in reader:
        row = (row['regions'],row['keywords'])
        places.append(row)

csvfile.close()
print(places)

# Get your GOOGLE API key
key = input("Enter your api key: ")

for element in places:
    locations = element[0]
    keywords = element[1]
    inputvalue = locations + " " + keywords
    inputvalue = inputvalue.replace(" ","%20")
    url = "https://maps.googleapis.com/maps/api/place/findplacefromtext/json?input={a}&inputtype=textquery&fields=photos,formatted_address,name,rating,opening_hours,geometry&key={b}".format(a = inputvalue, b = key)
    print(url)
    req = requests.get(url)
    print("done")
    data = req.json()
    rating = {}
    address = data['candidates'][0]['formatted_address']
    rating = data['candidates'][0]['rating']
    print(address,",",rating)