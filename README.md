# 🚦 TCP Congestion Control Comparison using GNS3

This project demonstrates and compares the behavior of various **TCP congestion control algorithms** using simulations built in **GNS3**. It visualizes how different algorithms handle congestion under varying network conditions and analyzes their performance based on congestion window growth and packet loss behavior.

---

## 📌 Algorithms Compared

1. **TCP NewReno**
2. **TCP HighSpeed**
3. **TCP Veno**
4. **TCP Vegas**

Each algorithm was tested under identical conditions to provide a fair comparison.

---

## ⚙️ Network Configuration

- **Channel Bandwidth**: 2 Mbps (default)
- **Application Data Rate**: 2 Mbps (default)
- Additional scenario tested with:
  - Bandwidth: 6 Mbps
  - Data Rate: 0.5 Mbps

---

## 📊 Results Summary

| Algorithm     | Packet Loss Count | Characteristics                                                                 |
|---------------|-------------------|----------------------------------------------------------------------------------|
| **NewReno**   | 38                | Classic loss-based; steep drop on congestion; curved recovery                   |
| **HighSpeed** | 38                | Modified Reno; sharper edges; aggressive window growth for high-speed networks  |
| **Veno**      | 38                | Reno + Vegas hybrid; distinguishes wireless loss; smoother congestion control   |
| **Vegas**     | 38                | Delay-based detection; early congestion response; stable and efficient windows  |

---

## 📈 Graphical Insights

### TCP NewReno  
![NewReno](https://user-images.githubusercontent.com/107786677/225347462-85ad0159-52fe-4277-8f58-cf4933ffe64b.png)

- Linear growth in slow start.
- Curved drop at congestion.
- High slope when window is small; stabilizes as window grows.

---

### TCP HighSpeed  
![HighSpeed](https://user-images.githubusercontent.com/107786677/225347736-f36257dd-6097-48e5-8cfa-ce0a303d6459.png)

- Similar to NewReno with sharper drops during timeouts.
- Tuned for large bandwidth-delay product (BDP) networks.

---

### TCP Veno  
![Veno](https://user-images.githubusercontent.com/107786677/225348017-813cd9ba-a607-4780-a363-cc87c7268025.png)

- Designed for wireless networks.
- Differentiates between congestion and random packet loss.
- Smoother curves compared to NewReno.

---

### TCP Vegas  
![Vegas](https://user-images.githubusercontent.com/107786677/225348630-3bbc555a-2999-47c8-8aa2-39fd651ea273.png)

- Uses RTT to detect congestion early.
- Maintains a higher minimum congestion window.
- Very stable throughput without large drops.

---

## 🔁 Network Load Variations

### Case 1: 2 Mbps Bandwidth, 2 Mbps App Rate  
![2Mbps](https://user-images.githubusercontent.com/107786677/225348856-35ea8768-9bcd-4577-8308-bbce4de005ae.png)

- Congestion window peaks around 16000.
- Small, random drops observed.
- Congestion not significantly impacted by further bandwidth increase.

---

### Case 2: 6 Mbps Bandwidth, 0.5 Mbps App Rate  
![0.5Mbps](https://user-images.githubusercontent.com/107786677/225349077-9c2bbb46-f7f2-4e06-954a-2e16210d0204.png)

- Ample bandwidth leads to reduced congestion.
- Much smoother congestion window behavior.

---

## 📦 Tools Used

- **GNS3** for network simulation
- Custom monitoring scripts to record congestion window evolution
- TCP implementations from Linux kernel modules

---

## 📚 References

- RFC 6582 – The NewReno Modification to TCP's Fast Recovery Algorithm
- TCP Vegas: End to End Congestion Avoidance on a Global Internet
- HighSpeed TCP for Large Congestion Windows (RFC 3649)
- TCP Veno: TCP Enhancement for Transmission over Wireless Access Networks

---

## 📬 Contact

Gaurav Chaudhari  
📧 [Email](mailto:gauraviitmcse@gmail.com)  
🔗 [LinkedIn](https://www.linkedin.com/in/gauravbyte)  
💻 [GitHub](https://github.com/gauravbyte)

---

