// 🔹 put(key, value)
// Case 1: Key exists
//   Update value
//   Move node to front

// Case 2: New key
// If capacity full:
//   Remove node at tail (LRU)
//   Remove it from hashmap
// Create new node
// Insert at front
// Add to hashmap