def counting_valleys(steps,path):
    valleys = 0 
    altitude = 0 
    
    for step in path:
        if step== 'U':
            altitude += 1
            if altitude==0:
                valleys += 1
        elif step == 'D' :
            altitude -= 1
    
    return valleys



def main():
    steps = 8  # Example number of steps
    path = "UDDDUDUU"  # Example path

    valleys = counting_valleys(steps, path)

    print(f"Number of valleys: {valleys}")
    
    
if __name__=="__main__":
    main()