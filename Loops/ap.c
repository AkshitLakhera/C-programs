tly

    int
    main()
{
    int a, d, n;
    int i;

    // Input: First term, common difference, and number of terms
    printf("Enter the first term (a): ");
    scanf("%d", &a);

    printf("Enter the common difference (d): ");
    scanf("%d", &d);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Output: Generate and display the terms of the AP
    printf("The Arithmetic Progression is:\n");
    for (i = 0; i < n; i++)
    {
        int term = a + i * d; // Calculate the current term
        printf("%d ", term);  // Print the term
    }
    printf("\n"); // New line at the end

    return 0;
}
