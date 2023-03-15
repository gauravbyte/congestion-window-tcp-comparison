
# congestion-window-tcp-comparison   <br/>
TcpNewReno :   <br/>
packetLossCount TcpNewReno 38   <br/>
this is project made for comparing different tcp congestion control algorithm using  gns3    <br/>
![image](https://user-images.githubusercontent.com/107786677/225347462-85ad0159-52fe-4277-8f58-cf4933ffe64b.png)   <br/>
The basic idea of these extensions to the fast retransmit and fast recovery algorithms are as The TCP   <br/>
sender can infer, from the arrival of duplicate acknowledgments, whether multiple losses in the same   <br/>
window of data have most likely occurred, and avoid taking a retransmit timeout or   <br/>
making various congestion window reductions due to such an event.   <br/>
● Looking at the plot, we observe that the slow start phase is linear in the collision avoidance   <br/>
phase. We get curved output at the end; hence as soon as we experience the congestion window   <br/>
again drop minimum value.   <br/>
● We also observed that at once congestion detected slope of the congestion window is high when   <br/>
it is low but as it gets high gradient also get lesser anticipating congestion.   <br/>
TcpHighSpeed :   <br/>
packetLossCount TcpHighSpeed 38   <br/>
Tip highspeed Is a modification of the TCP-Reno congestion control mechanism with TCP   <br/>
connections with large congestion windows. H-TCP is a loss-based algorithm, using   <br/>
additive-increase/multiplicative- decrease to   <br/>
control the TCP congestion window   <br/>
![image](https://user-images.githubusercontent.com/107786677/225347736-f36257dd-6097-48e5-8cfa-ce0a303d6459.png)   <br/>
● In the graph, we don’t see much difference with New Reno.   <br/>
● But at the top at TCP acknowledgment loss or timeout, we see there are sharper edges than   <br/>
usual.   <br/>
TcpVeno :   <br/>
Packet Loss count TCP Veno is 38   <br/>
TCP Veno module is a congestion control module to improve TCP performance over wireless networks.   <br/>
It improves over the TCP Reno congestion control algorithm by using the estimated state of a connection   <br/>
based on TCP Vegas.TCP Veno reduces the "blind" reduction of TCP window regardless of the   <br/>
cause of packet loss. This TCP version distinguishes between accidental loss(non- congestion state)   <br/>
and congestion loss (congestion state). Also, depending on this difference, it refines the congestion   <br/>
window adjustment. In the wireless environment, the packet loss is because of the noise and link error.   <br/>
![image](https://user-images.githubusercontent.com/107786677/225348017-813cd9ba-a607-4780-a363-cc87c7268025.png)   <br/>
Packet Loss count TCP Veno is 38   <br/>
TCP Veno module is a congestion control module to improve TCP performance over wireless networks.   <br/>
It improves over the TCP Reno congestion control algorithm by using the estimated state of a connection   <br/>
based on TCP Vegas.TCP Veno reduces the "blind" reduction of TCP window regardless of the   <br/>
cause of packet loss. This TCP version distinguishes between accidental loss(non- congestion state)   <br/>
and congestion loss (congestion state). Also, depending on this difference, it refines the congestion   <br/>
window adjustment. In the wireless environment, the packet loss is because of the noise and link error.   <br/>
If we compare TCP new reno, there is not much difference in the graph, but we can see that   <br/>
curves and lines are much smoother for TCP Veno.   <br/>
TcpVegas:   <br/>
Packet loss Count 38   <br/>
TCP Vegas emphasizes packet delay, rather than packet loss, as a signal to determine the   <br/>
rate at which to send packets. Unlike TCP-Reno, which detects congestion only after it   <br/>
has happened via packet drops, TCP-Vegas detects congestion at a nascent stage   <br/>
based on increasing RTT values of the packets in the connection.   <br/>
![image](https://user-images.githubusercontent.com/107786677/225348630-3bbc555a-2999-47c8-8aa2-39fd651ea273.png)   <br/>
looking at the graph, we can see that the congestion window not dropping below a certain   <br/>
threshold throughout minimum congestion window base is higher as compared to other   <br/>
algorithms   <br/>
Channel Bandwidth 2Mbps Application Datarate 2Mbps   <br/>
![image](https://user-images.githubusercontent.com/107786677/225348856-35ea8768-9bcd-4577-8308-bbce4de005ae.png)   <br/>
● When channel bandwidth is almost the same with app datarate 2 Mbps, we see a more   <br/>
random variable drop after collision base return.   <br/>
● 2 Mbps bandwidth we see reached highest congestion window close to 16000 that is   <br/>
● The highest congestion window throughout the transfer is almost the same for all   <br/>
configurations.   <br/>
● According to graphs, we can deduce that after some threshold value of bandwidth of   <br/>
channel congestion doesn’t get affected by that much margin.   <br/>
App Datarate 0.5 Mbps Channel Bandwidth 6Mbps   <br/>
![image](https://user-images.githubusercontent.com/107786677/225349077-9c2bbb46-f7f2-4e06-954a-2e16210d0204.png)                                                         <br/>
