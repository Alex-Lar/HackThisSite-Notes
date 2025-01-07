import argparse
import cipher

parser = argparse.ArgumentParser(
    description="Encrypt/decrypt strings using a Caesar cipher with a variable shift"
)
group = parser.add_mutually_exclusive_group()

group.add_argument("-e", "--encrypt", help="encrypt a string", action="store_true")
group.add_argument("-d", "--decrypt", help="decrypt a string", action="store_true")
parser.add_argument("string", type=str, help="string to encrypt/decrypt")

args = parser.parse_args()

result = ""
if args.encrypt:
    result = cipher.encrypt(args.string)

if args.decrypt:
    result = cipher.decrypt(args.string)
    
if (len(result)):
    print(f"{args.string} -> {result}")
