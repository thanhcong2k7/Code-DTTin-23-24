if [ -d "mc_sys" ]; then
    echo "mc_sys exist!"
else
    mkdir mc_sys
fi
if [ -d "jars" ]; then
    echo "jars exist!"
else
    mkdir jars
fi
cd mc_sys
clear
echo "Preparing..."
wget -O ngrok-stable-linux-amd64.zip "https://github.com/KhanhNguyen9872/Debian_VPS_Google_Shell/blob/main/ngrok-stable-linux-amd64.zip?raw=true" > /dev/null 2>&1
unzip ngrok-stable-linux-amd64.zip > /dev/null 2>&1; rm ngrok-stable-linux-amd64.zip 2> /dev/null
sudo mv ./ngrok /bin/ngrok; chmod 777 /bin/ngrok
echo "Checking ngrok authtoken key ..."
if test -f "ng_auth"; then
    value="$(<ng_auth)"
    ngrok authtoken $value
else
    echo "Open this link to get your ngrok authtoken (login required)"
    echo "https://dashboard.ngrok.com/get-started/your-authtoken"
    echo "\n"
    read -p "Paste your ngrok authtoken here: " ngauth
    ngrok authtoken $ngauth
    echo $ngauth > ng_auth
fi
read -p "Choose your server version (e.g. 1.19, 1.19.1, ...): " mcver
function run(){
    java -Xmx8G -Xms8G -jar "jars/server_$mcver.jar" nogui > /dev/null 2>&1
    ngrok tcp 25565 --region ap > /dev/null 2>&1
    echo "Use this URL to enter your MC server."
    echo "Keep your browser (this tab) always open so that your server won't shut down."
    curl --silent --show-error http://127.0.0.1:4040/api/tunnels | sed -nE 's/.*public_url":"tcp:..([^"]*).*/\1/p'
    echo "\n"
    seq 1 9999999999999 | while read i; do echo -en "\r Running .     $i s /9999999999999 s";sleep 0.1;echo -en "\r Running ..    $i s /9999999999999 s";sleep 0.1;echo -en "\r Running ...   $i s /9999999999999 s";sleep 0.1;echo -en "\r Running ....  $i s /9999999999999 s";sleep 0.1;echo -en "\r Running ..... $i s /9999999999999 s";sleep 0.1;echo -en "\r Running     . $i s /9999999999999 s";sleep 0.1;echo -en "\r Running  .... $i s /9999999999999 s";sleep 0.1;echo -en "\r Running   ... $i s /9999999999999 s";sleep 0.1;echo -en "\r Running    .. $i s /9999999999999 s";sleep 0.1;echo -en "\r Running     . $i s /9999999999999 s";sleep 0.1; done
}
if test -f "jars/server_$mcver.jar"; then
    run
else
    echo "Downloading version $mc_ver ... (Paper)"
    curl -Lo "jars/server_$mcver.jar" "https://serverjars.com/api/fetchJar/servers/paper/1.19"
    run
fi