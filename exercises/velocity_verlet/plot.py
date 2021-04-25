import matplotlib.pyplot as plt 
import numpy as np  

data = np.loadtxt("harmo_surface.dat")
plt.plot(data[:,0], data[:,1])
plt.plot(data[:,0], data[:,2])
plt.grid()
plt.show()