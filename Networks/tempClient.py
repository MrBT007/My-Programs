import socket

def client():
    host = socket.gethostname()
    port = 5000

    client_socket = socket.socket()
    client_socket.connect((host,port))

    message = input('->')
    while message.lower().strip() != 'bye':

        client_socket.send(message.encode())

        response = client_socket.recv(1024).decode()
        print("From Server : "+str(response))

        message = input('->')
    
    client_socket.close()


if __name__ == '__main__':
    client() 