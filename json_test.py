# An example for using python to write json data
# The app cannot be name jason.py or otherwise there will be some errir

import json
data = [{
  "orderID": 12345,
  "shopperName": "John Smith",
  "shopperEmail": "johnsmith@example.com",
  "contents": [
    {
      "productID": 34,
      "productName": "SuperWidget",
      "quantity": 1
    },
    {
      "productID": 56,
      "productName": "WonderWidget",
      "quantity": 3
    }
  ],
  "orderCompleted": True
}]
json = json.dumps(data)
print(json)