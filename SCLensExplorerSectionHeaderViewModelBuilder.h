//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCLensExplorerHeaderViewDebugData, UIColor, UIFont;

@interface SCLensExplorerSectionHeaderViewModelBuilder : NSObject
{
    NSString *_sectionName;
    NSString *_countText;
    UIColor *_textColor;
    UIFont *_textFont;
    struct CGPoint _offset;
    SCLensExplorerHeaderViewDebugData *_debugData;
}

+ (id)lensExplorerSectionHeaderViewModel;
+ (id)lensExplorerSectionHeaderViewModelFromExistingLensExplorerSectionHeaderViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withCountText:(id)arg1;
- (id)withDebugData:(id)arg1;
- (id)withOffset:(struct CGPoint)arg1;
- (id)withSectionName:(id)arg1;
- (id)withTextColor:(id)arg1;
- (id)withTextFont:(id)arg1;

@end

