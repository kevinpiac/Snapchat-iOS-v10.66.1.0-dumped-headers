//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIView;
@protocol SCInSettingScreenEntryDelegate;

@interface SCInSettingScreenEntryViewProvider : NSObject
{
    NSArray *_featureNames;
    id <SCInSettingScreenEntryDelegate> _delegate;
    UIView *_entryView;
    NSString *_entryId;
}

- (void).cxx_destruct;
- (void)_entryDidSingleTap:(id)arg1;
- (id)_setupDescriptionView:(id)arg1;
- (id)_setupEntryView;
- (id)_setupImageView:(id)arg1;
- (id)_setupTitleView:(id)arg1;
@property(nonatomic) __weak id <SCInSettingScreenEntryDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *entryId; // @synthesize entryId=_entryId;
@property(retain, nonatomic) UIView *entryView; // @synthesize entryView=_entryView;
@property(nonatomic) __weak NSArray *featureNames; // @synthesize featureNames=_featureNames;
- (id)initEntryWithTitle:(id)arg1 entryId:(id)arg2 image:(id)arg3 description:(id)arg4 featureNames:(id)arg5;

@end
