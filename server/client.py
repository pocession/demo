import socket

s = socket.socket()
host = socket.gethostname() # get host
port = 12345                # set port

s.connect((host, port))
st = "connect done"
byt = st.encode()
s.send(byt) # Encode the string into byt and send it to server
receive = s.recv(1024) # Get information from server
print(receive)
s.close()