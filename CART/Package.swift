// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "CART",
    platforms: [
        .iOS(.v16)
    ],
    products: [
        .library(
            name: "CART",
            targets: ["CART"]),
    ],
    targets: [
        .binaryTarget(
            name: "CART",
            path: "./Resource/CART.xcframework"
        ),
    ]
)
