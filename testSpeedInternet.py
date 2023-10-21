#get internet speed
import speedtest
s= speedtest.Speedtest()
down=((s.download())/1024)/1024
up =((s.upload())/1024)/1024
print(f'Download speed : {round(down,2)}mb/s')
print(f'upload speed : {round(up,2)}mb/s')