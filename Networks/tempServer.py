import socket

def server():
    host = socket.gethostname()
    port = 5000
    server_socket = socket.socket()
    server_socket.bind((host,port))

    server_socket.listen(2)
    conn,address = server_socket.accept()
    print("Connection from : "+str(address))

    while 1:
        data = conn.recv(1024).decode()
        if not data:
            break

        print('From connection : '+str(data))

        message = input('->')
        conn.send(message.encode())
    
    server_socket.close()


if __name__ == '__main__':
    server()