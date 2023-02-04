import time
from threading import Thread

def calc_square(arr):
    for n in arr:
        time.sleep(0.5)
        print("Square: ", n*n)

def calc_cube(arr):
    for n in arr:
        time.sleep(0.5)
        print("Cube: ", n*n*n)

if __name__ == "__main__":    
    arr = [1,2,3,4,5]

    #calc_square(arr)
    #calc_cube(arr)
    t1 = Thread(target=calc_square,args=(arr,))
    t2 = Thread(target=calc_cube,args=(arr,))

    t1.start()
    t2.start()

    t1.join()
    t2.join()
    print("Execution completed!")