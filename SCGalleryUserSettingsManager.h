//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCUserSession;

@interface SCGalleryUserSettingsManager : NSObject
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool backupOnCellular;
@property(nonatomic) _Bool flashbackStories;
- (id)initWithUserSession:(id)arg1;
@property(nonatomic) _Bool privateGalleryEnabled;
@property(nonatomic) _Bool saveToPrivateGalleryByDefault;
@property(nonatomic) unsigned long long snapSaveOption;
@property(nonatomic) _Bool storyAutoSaving;
@property(nonatomic) _Bool topSecretPrivateGalleryEnabled;
- (_Bool)shouldSaveToCameraRoll;
- (_Bool)shouldSaveToMemories;

@end

