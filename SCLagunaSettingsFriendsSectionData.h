//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface SCLagunaSettingsFriendsSectionData : NSObject
{
    NSDictionary *_userIdToCellViewModelMap;
    NSString *_title;
    NSArray *_cellViewModels;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *cellViewModels; // @synthesize cellViewModels=_cellViewModels;
- (id)initWithTitle:(id)arg1 snapchatters:(id)arg2;
- (id)snapchatterAtIndex:(long long)arg1;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;

@end

