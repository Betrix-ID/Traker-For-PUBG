#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>

// Fungsi untuk mengecek apakah file/folder ada
int cek_eksistensi(const char *path) {
    struct stat buffer;
    return (stat(path, &buffer) == 0);
}

// Fungsi untuk menjalankan perintah shell
void shell(const char *pesan) {
    char command[512];
    snprintf(command, sizeof(command),
             "cmd notification post -I /sdcard/lib/git.png -S bigtext -t '♨️ TFP' 'Tag' '%s' > /dev/null 2>&1",
             pesan);
    system(command);
}

int main() {
    // Mengecek apakah folder sumber ada sebelum copy
    if (cek_eksistensi("/sdcard/lib/UFS")) {
        system("cp /sdcard/lib/UFS/game_patch_3.6.0.19551.pak /sdcard/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/puffer_temp > /dev/null 2>&1");
    } else {
        printf("⚠️ Folder sumber tidak ditemukan!\n");
        return 1;
    }
    
    printf ("\n");
    // Up performance PUBG Mobile
    system("cmd package compile -m speed -f com.tencent.ig");
    system("cmd otadexopt cleanup");
    system("cmd otadexopt prepare");
    system("cmd activity kill-all");
    system("cmd activity clear-debug-app");
    system("cmd activity clear-exit-info");
    system("cmd activity clear-watch-heap com.tencent.ig");
    system("cmd activity set-watch-heap com.tencent.ig 100663296");

    sleep(1);

    // Menampilkan informasi kepada pengguna
    printf("\n");
    printf("\t ID   : Buka Manual game PUBG Mobile\n");
    printf("             Untuk Step terakhir Dill\n\n");
    printf("\t US  : Open your game PUBG Mobile\n");
    printf("             For the last step, Dill\n\n");

    printf(" ⚠️ Module ini dilindungi oleh hak cipta dan hanya\n");
    printf(" dapat digunakan oleh pengguna biasa. Penggunaan ini\n");
    printf(" tidak diperbolehkan untuk pengembang lain, termasuk\n");
    printf(" penggunaan kode, desain, atau fitur lain dalam module\n");
    printf(" tanpa izin tertulis dari pemilik hak cipta module.\n");
    printf("______________________________________________(+)\n\n");

    // Mengirim notifikasi
    shell("Successfully installing sacrificing");

    return 0;
}