import matplotlib.pyplot as plt 
import numpy as np 
traj = np.loadtxt("traj.dat")
plt.plot(traj[:,0])
plt.plot(traj[:,1])
#plt.scatter(traj[:,0], traj[:,1], s = 0.1)
#plt.hist(traj[:,0], bins = 50)
plt.grid()
plt.show()