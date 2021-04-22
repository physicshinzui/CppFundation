import matplotlib.pyplot as plt 
import numpy as np 
import sys
traj = np.loadtxt(sys.argv[1])
#plt.plot(traj)
#plt.scatter(traj[:,0], traj[:,1], s = 0.1)
plt.hist(traj, bins = 50)
#plt.grid()
plt.show()