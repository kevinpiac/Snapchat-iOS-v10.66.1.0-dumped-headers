//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCActionModel;

@interface SCLensExplorerHeaderViewDebugDataBuilder : NSObject
{
    NSString *_imageName;
    struct UIEdgeInsets _insets;
    double _alpha;
    struct CGSize _buttonSize;
    SCActionModel *_actionModel;
}

+ (id)lensExplorerHeaderViewDebugData;
+ (id)lensExplorerHeaderViewDebugDataFromExistingLensExplorerHeaderViewDebugData:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withActionModel:(id)arg1;
- (id)withAlpha:(double)arg1;
- (id)withButtonSize:(struct CGSize)arg1;
- (id)withImageName:(id)arg1;
- (id)withInsets:(struct UIEdgeInsets)arg1;

@end

