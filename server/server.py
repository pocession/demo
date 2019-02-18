import socket

s = socket.socket()
host = socket.gethostname()
port = 12345
s.bind((host, port))        # host + port

s.listen(5)                 # listen from client
while True:
    c, addr = s.accept()     # get something from client (message, address)
    print ("address：",addr) #
    st="Hello world! (from server)"
    byt=st.encode()
    c.send(byt)
    receive = c.recv(1024)
    print(receive)
    c.close()                # close