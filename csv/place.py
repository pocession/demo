# Demostrate how to read csv into dict

import csv

# Show how to read csv file and use their row[0] as dict indicator

with open('locations.csv',newline='') as csvfile:
    reader = csv.DictReader(csvfile, delimiter=',')
    for row in reader:
        print(row)

csvfile.close()

with open('locations.csv',newline='') as csvfile2:
    reader = csv.DictReader(csvfile2, delimiter=',')
    for row in reader:
        row = (row['regions'],row['keywords'])
        print(row)

csvfile2.close()


# Get the header from csv file
placelist = []
with open('locations.csv',newline='') as csvfile3:
    reader = csv.reader(csvfile3, delimiter=',')
    for row in reader:
        placelist.append(row)
    print(placelist)
    regions = placelist[0][0]
    keywords = placelist[0][1]
    print("header is: {a} and {b}".format(a = regions, b = keywords))

csvfile3.close()

# Create a key:value pair in a dict
# This usage is dependent your need, since the key needs to be unique
placedict = {}

for element in placelist:
    placedict[element[0]] = element[1]

print(placedict)

