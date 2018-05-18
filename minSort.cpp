bool minSort (BST* &a)
{
    Customer cRight = a->right.name; // right customer
    Customer cLeft = a->left.name; // left customer
    
    // Find which side has the smaller value, give priority to that side
    string priority;
    if (a->name.left < a->name.right)
    {
        priority = "left";
    }
    else
    {
        priority = "right";
    }
    
    
    // Left priority
    if(priority == "left")
    {
        // Checks if root element needs to swap with the left leaf
        if(a->name.price > a->left->name.price)
        {
            // Swap root element with left element
            Customer cTemp = a->name; // Store root element in temporary customer object
            a->name = cLeft; // Root element becomes left leaf
            a->name.left = cTemp; // Left leaf becomes the temporary customer which is the original root
            minSort(a->left); // Recursively calls function to left leaf
            
        }
        
    }
    
    // Right priority
    if(priority == "right")
    {
        // Checks if root element needs to swap with the right leaf
        if(a->name.price > a->right->name.price)
        {
            // Swap root element with right element
            Customer cTemp = a->name; // Store root element in temporary customer object
            a->name = cRight; // Root element becomes right leaf
            a->name.right = cTemp; // Right leaf becomes the temporary customer which is the original root
            minSort(a->right); // Recursively calls function to right leaf
            
        }
        
    }
    
    return true;
};