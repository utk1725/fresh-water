from scipy import stats
import numpy as np
from matplotlib import pyplot as plt

# training data
x= np.array([112,345,198,305,372,660,302,420,578]) #size of hours
y= np.array([1120,1523,2102,2230,2600,3200,3409,3699,4460]) #price of hourse

slope, intercept, r_value, p_value, std_err= stats.linregress(x,y)

plt.plot(x,y,'ro',color='black') # ro means round

plt.ylabel('price')
plt.xlabel('size of the house')

plt.axis([0,600,0,5000])

plt.plot(x, x*slope*intercept, 'b') #for line

plt.plot()
plt.show()

#prediction

newX=160
newY= newX*slope+intercept

print (newY)