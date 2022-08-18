# TPM2 sandbox
This experimental repository for tpm API investigation

TPM API implementations (tpm software stack) consists of 3 lvl of complexity, the easiest one is Feature API (FAPI), 
Enhanced System API (ESAPI), System API (SAPI) is low level api. https://github.com/tpm2-software/tpm2-tss

Useful resources:
 - Software community https://tpm2-software.github.io/
 - For simple no code interaction with TPM device in your terminal use https://github.com/tpm2-software/tpm2-tools
 - C, C++ libs https://github.com/tpm2-software
 - Organisation that works on TPM specification https://trustedcomputinggroup.org/
 - FAPI specs https://trustedcomputinggroup.org/wp-content/uploads/TSS_FAPI_v0p94_r09_pub.pdf
 - Brief presentation on TPM https://www.youtube.com/watch?v=XwaSyHJIos8 and slides https://elinux.org/images/d/d9/Using-the-tpm-its-not-rocket-science-anymore_slides_ELCE2020.pdf
 - Very useful interactive tutorial https://google.github.io/tpm-js/

Software implementation of TPM emulator (best to use in order to not mess up your hardware):
https://github.com/stefanberger/swtpm

When using software emulation disable EK in fapi configs `/usr/local/etc/tpm2-tss/fapi-config.json`

```{
"profile_name": "P_ECCP256SHA256",
"profile_dir": "/usr/local/etc/tpm2-tss/fapi-profiles/",
"user_dir": "~/.local/share/tpm2-tss/user/keystore",
"system_dir": "/usr/local/var/lib/tpm2-tss/system/keystore",
"tcti": "",
"system_pcrs" : [],
"log_dir" : "/usr/local/var/run/tpm2-tss/eventlog/",
"ek_cert_less": "yes"
}
```

Also tpm is emulated for user by name and group tss/tss so be aware of it. (I didn't figure out how to change user)

Example of running in chardev mode `sudo swtpm chardev --vtpm-proxy --tpmstate dir=/tmp/myvtpm --tpm2 --ctrl type=tcp,port=2322`
got from this issue https://github.com/stefanberger/swtpm/issues/427

Python bindings https://pypi.org/project/tpm2-pytss/

