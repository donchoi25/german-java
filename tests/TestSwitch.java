class Main { 
	public void main() {
		switch (x) {
		case 3: case 4:
		    y++;
		    break;
		case 2:
		    z++;
		    break;
		default:
		    i++;
		    break;
		case 0:
		    break;
		}
		switch (x) {
		}
		switch (x) {
		case 3: case 3+4:
		    x++;
		    break;
		}
	}
}
