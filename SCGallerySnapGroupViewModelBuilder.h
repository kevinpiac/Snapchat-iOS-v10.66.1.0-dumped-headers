//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SCGallerySnapGroupViewModelBuilder : NSObject
{
    NSString *_dateRange;
    NSString *_locationName;
    NSArray *_cellViewModels;
}

+ (id)withGallerySnapGroupViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setCellViewModels:(id)arg1;
- (id)setDateRange:(id)arg1;
- (id)setLocationName:(id)arg1;

@end

