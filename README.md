# TPM2 sandbox
This experimental repository for tpm API investigation

TPM API implementations (tpm software stack) consists of 3 lvl of complexity, the easiest one is Feature API (FAPI), 
Enhanced System API (ESAPI), System API (SAPI) is low level api. https://github.com/tpm2-software/tpm2-tss

Useful resources:
 - Software community https://tpm2-software.github.io/
 - C, C++ libs https://github.com/tpm2-software
 - Organisation that works on TPM specification https://trustedcomputinggroup.org/
 - FAPI specs https://trustedcomputinggroup.org/wp-content/uploads/TSS_FAPI_v0p94_r09_pub.pdf
 - Brief presentation on TPM https://www.youtube.com/watch?v=XwaSyHJIos8 and slides https://elinux.org/images/d/d9/Using-the-tpm-its-not-rocket-science-anymore_slides_ELCE2020.pdf

Software implementation of TPM emulator (best to use in order to not mess up your hardware):
https://github.com/stefanberger/swtpm

Example of running in chardev mode `sudo swtpm chardev --vtpm-proxy --tpmstate dir=/tmp/myvtpm --tpm2 --ctrl type=tcp,port=2322`
got from this issue https://github.com/stefanberger/swtpm/issues/427


Python bindings https://pypi.org/project/tpm2-pytss/

