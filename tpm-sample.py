from tpm2_pytss.FAPI import FAPI

api = FAPI()

# print(api.get_info())

print(api.get_random(100))

api.provision()
# api.create_key('/HS/SRK/my_first_key')
api.list()
signature, pub_key, certificate = api.sign('/HS/SRK/my_first_key', b'0'*32)
encrypted_text = api.encrypt('/HS/SRK/my_first_key', 'text')