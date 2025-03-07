#!/system/bin/sh
# Checking ID shell
if [ "$(id -u)" -ne 2000 ]; then
    echo "[ Error |@UnixeID(Yeye)]"
    exit 1
fi
# Smart Notification
shell() {
    sor="$1"
    cmd notification post -S bigtext -t '♨️ Traker For PUBG' 'Tag' "$sor" > /dev/null 2>&1
}
# Style display Terminal
    echo
    echo "     ☆================================☆"
    echo
    echo "       ~ Description. Traker For PUBG.... "
    echo
    echo "       - Author                 :  @UnixeID"
    echo "       - Version                :  1.0"
    echo "       - Release               :  07 - Mar - 2025"
    echo "       - Name Shell         :  Traker For PUBG."
    echo
    echo "    |_______________________________________|"
    echo "    \______________________________________/"
    echo
    echo "   Priority Traker For PUBG. "
    sleep 2
    echo
    echo
 for UF in $(pm list package -3 | cut -f2 -d: | grep com.tencent.ig); do
if [[ "$UF" == "com.tencent.ig" ]]; then
    printf "\n"
    printf "\tID    : Device Anda Memenuhi\n"
    printf "\t         Persyaratan Untuk Menggunakan Script Ini\n"
    printf "\t         Wait To Loading scripting....\n"
    printf "\n"
    printf "\tUS.   : Your Device Meets\n"
    printf "\t          Requirements For Using This Script\n"
    printf "\t          Wait To Loading scripting....\n"
    printf "\n"
    shell "Wait To Loading Min 1-5"
    cp /sdcard/lib/svc /data/local/tmp && chmod +x /data/local/tmp/svc && /data/local/tmp/svc
 else
    printf "\n"
    printf " ID   : Maaf Device Anda Tidak Memenuhi\n"
    printf "          Persyaratan, Anda Tidak Dapat Menggunakan\n"
    printf "          Module Ini Di Device Anda.\n"
    printf "\n"
    printf " US.  : Sorry, your device doesn't meet\n"
    printf "          Requirements, You Cannot Use\n"
    printf "          This Module On Your Device.\n"
    printf "\n"
    shell "PUBG Not foud !"
    exit 1 # Hentikan skrip Game PUBG tidak ditemukan
 fi
   done

   