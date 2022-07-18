import matplotlib.pyplot as plt
import sys
 
# total arguments
n = len(sys.argv)
# print("Total arguments passed:", n)
 
# # Arguments passed
# print("\nName of Python script:", sys.argv[0])

with open(sys.argv[1], 'r') as f:
    lines = f.readlines()
    x = [float(line.split()[0]) for line in lines]
    y = [float(line.split()[1]) for line in lines]
    
    
plt.figure(figsize=(16,8))
plt.title('Graph of congestion window vs Time '+sys.argv[1].split('.')[0], fontdict={'fontsize':13})
plt.xlabel('Time in seconds', fontsize=13)
plt.ylabel('Congestion Window Sizes', fontsize=13)
plt.plot(x ,y)
plt.savefig(sys.argv[1].split('.')[0]+".png")
plt.show()



