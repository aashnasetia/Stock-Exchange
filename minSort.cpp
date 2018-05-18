bool minSort (BST* &a)
{
    Customer cRight = a->right.name; // right customer
    Customer cLeft = a->left.name; // left customer
    
    
    string priority;
    if(a->right == NULL)
    {
        // If this is true, it is the last leaf in the branch, BST is sorted
        if (a->left == NULL)
        {
            return true;
        }
        // Left leaf exists, but right does not
        else
        {
            priority = "left";
        }
            
    }
    // Right is not NULL, therefore Left cannot be NULL either
    else
    {
        // Find which side has the smaller price, give priority to that side
        if (a->left->name.price < a->right->name.price)
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
    }
    
    
    
        
    
    
    return true;
};