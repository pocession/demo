# A python app to show how to use jQuery

from flask import Flask, render_template, request, jsonify
import json

app = Flask(__name__)

WORDS = []
with open("large", "r") as file:
    for line in file.readlines():
        WORDS.append(line.rstrip())

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/search")
def search():
    q = request.args.get("q")
    words = [word for word in WORDS if q and word.startswith(q)]
    data = json.dumps(words)
    print("data you are returning are: ")
    print(data)
    return jsonify(words)