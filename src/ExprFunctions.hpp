inline double rng() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution < double > distribution(0.0, 1.0);

    return distribution(gen);
    }