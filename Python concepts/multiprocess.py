import time
from multiprocessing import Process

def calc_square(arr):
    for num in arr:
        time.sleep(0.5)
        print("square: ", num*num)

def calc_cube(arr):
    for num in arr:
        time.sleep(0.5)
        print("cube: ", num*num*num)

        
if __name__ == "__main__":
    arr = [1,2,3,4]
    p1 = Process(target=calc_square,args=(arr,))
    p2 = Process(target=calc_cube,args=(arr,))
    
    p1.start()
    p2.start()
    
    p1.join()
    p2.join()
    
    print("Main execution completed")