#curl -sS https://download.spotify.com/debian/pubkey_7A3A762FAFD4A51F.gpg | sudo gpg --dearmor --yes -o /etc/apt/trusted.gpg.d/spotify.gpg
#echo "deb http://repository.spotify.com stable non-free" | sudo tee /etc/apt/sources.list.d/spotify.list
sudo apt update
sudo apt install xfce4 xfce4-goodies dbus-x11 tigervnc-standalone-server tigervnc-xorg-extension firefox-esr -y
vncserver -kill :0
vncserver :0
sudo /sbin/sysctl -w net.ipv4.tcp_keepalive_time=10000 net.ipv4.tcp_keepalive_intvl=5000 net.ipv4.tcp_keepalive_probes=100
pulseaudio -D
./ngrok tcp 5900 --region ap
