# Assume that programmer runs this Reminder at 9 AM

from datetime import datetime
from time import time
from pygame import mixer

yourname = input("Enter your Name here : ")
print(f"Hello {yourname}, welcome to this reminder assistant")


def musiconloop(file, stopper):
    mixer.init()
    mixer.music.load(file)
    mixer.music.play()
    while True:
        input_of_user = input()
        if input_of_user == stopper:
            mixer.music.stop()
            break


def log_now(msg):
    with open("mylogs.txt", "a") as f:
        f.write(f"{msg} {datetime.now()}\n")


if __name__ == '__main__':

    init_water = time()
    init_eye = time()
    init_phyexercise = time()
    watersecs = 20*60
    eyesecs = 30*60
    phyexercisesecs = 50*60

    while True:
        if time()-init_water > watersecs:
            print("Time to drink water. Enter 'drank' to stop alarm")
            musiconloop('Water.mp3', 'drank')
            init_water = time()
            log_now("Drank water at")

        if time()-init_eye > eyesecs:
            print("Time to relax Eyes. Enter 'drank' to stop alarm")
            musiconloop('eyes.mp3', 'doneeye')
            init_eye = time()
            log_now("Eyes Relaxed at")

        if time()-init_phyexercise > phyexercisesecs:
            print("Time physical Exercise. Enter 'drank' to stop alarm")
            musiconloop('phyexercise.mp3', 'donephy')
            init_phyexercise = time()
            log_now("Physical Exercise at")
