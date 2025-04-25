#include<bpf/libbpf.h>

int main(){
	int ver1=libbpf_major_version();
	int ver2=libbpf_minor_version();

	printf("libbpf major version: %d\n", ver1);
	printf("libbpf minor version: %d\n", ver2);
	return 0;
}
