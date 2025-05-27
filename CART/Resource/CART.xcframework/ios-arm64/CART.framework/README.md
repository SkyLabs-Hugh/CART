# SDK

## 프로젝트 소개
이 프로젝트는 `MyFramework`라는 iOS 프레임워크를 기반으로 `XCFramework`를 생성하는 것을 목표로 합니다.

---

## 디렉토리 구조

---

## Commit 규칙
 
1. 제목은 특정단어 외 모두 한글로 작성한다.
2. 제목은 50글자 이내로 제한한다.
3. 제목 끝에는 마침표를 넣지 않는다.
4. 본문의 각 행은 72글자 내로 제한한다.
5. 어떻게 보다는 무엇과 왜를 설명한다.
6. 제목은 모두 소문자로 작성한다.

feat        새로운 기능에 대한 커밋
fix         버그 수정에 대한 커밋
build       빌드 관련 파일 수정 / 모듈 설치 또는 삭제에 대한 커밋
chore       그 외 자잘한 수정에 대한 커밋
ci          ci 관련 설정 수정에 대한 커밋
docs        문서 수정에 대한 커밋
style       코드 스타일 혹은 포맷 등에 관한 커밋
refactor    코드 리팩토링에 대한 커밋
test        테스트 코드 수정에 대한 커밋
perf        성능 개선에 대한 커밋

ex) git commit -m feat: 기획서가 수정되어 최신 기획서 기술 반영

---

# Tuist with XCFramework

### 그래프 명령어
tuist graph --format json > graph.json

### 스크립트 권한 추가
-> chmod +x Scripts/create_xcframework.sh


- swiftLint 설치방법 : brew install swiftlint (MacOS 프라이버시(권한)설정 필요)

# XCFramework 만들기 명령어 세트
- xcodebuild archive -scheme CART -archivePath ./Build/ios-arm64.xcarchive  -sdk iphoneos  -destination 'generic/platform=iOS' SKIP_INSTALL=NO BUILD_LIBRARY_FOR_DISTRIBUTION=YES


- xcodebuild archive -scheme CART -archivePath ./Build/ios-simulator.xcarchive -sdk iphonesimulator -destination 'generic/platform=iOS Simulator' SKIP_INSTALL=NO BUILD_LIBRARY_FOR_DISTRIBUTION=YES


- xcodebuild -create-xcframework -framework ./Build/ios-arm64.xcarchive/Products/Library/Frameworks/CART.framework -framework ./Build/ios-simulator.xcarchive/Products/Library/Frameworks/CART.framework -output ./Build/CART.xcframework


# Code Convention
- (가급적)Guard문을 사용할때는 함수의 최상단에서만 사용한다. 
- Xcode의 문제로, enum 이름이 [Task] 인경우 conflict => 적절한 prefix 추가 필요 ex)CLTask
