from collections import defaultdict

def load_data(input_file):
    times = {}
    incompatibilities = defaultdict(list)
    with open(input_file) as f:
        line = f.readline()
        while line:
            line = line.strip("\n")
            data = line.split(" ")
            if len (data) > 0:
                if (data[0] == 'p'):
                    garments_number = data[2]
                parse_data(data, times, incompatibilities)
            line = f.readline()
        f.close()
            
    return (times, incompatibilities, garments_number)

def parse_data(data, times, incompatibilities):
    if (data[0] == 'e'):
        incompatibilities[int(data[1])].append(int(data[2]))
    elif (data[0] == 'n'):
        times[data[1]] = data[2]
    return

def check_compatibility(garment, laundries, laundry_number, incompatibilities):
    incompatible_garments  = incompatibilities.get(garment)
    if (incompatible_garments):
        for g in laundries.get(laundry_number):
            if g in incompatible_garments:
                return False
    return True    

def create_output(laundries):
    output = open("entrega_1.txt", "w+")
    for key in laundries:
        for value in laundries[key]:
            output.write(f"{key} {value}\n")
    output.close()

def main():
    (times, incompatibilities, garments_number) = load_data("input.txt")
    laundries = defaultdict(list)
    laundry_number = 1
    for garment in range(1, int(garments_number) + 1):
        laundry_number = 1
        added = False
        if (laundry_number in laundries.keys()):
            while(not added and laundry_number < len(laundries.keys())):
                if(check_compatibility(garment, laundries, laundry_number, incompatibilities)):
                    laundries[laundry_number].append(garment)
                    added = True
                else:
                    laundry_number += 1
            if not added:
                laundry_number = len(laundries.keys()) + 1
                laundries[laundry_number].append(garment)

        else:
            laundry_number = len(laundries.keys()) + 1
            laundries[laundry_number].append(garment)
    create_output(laundries)
    return




if __name__ == "__main__":
    main()