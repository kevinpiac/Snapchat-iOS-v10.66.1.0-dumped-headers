//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSendToGroupInviteLinkCountryTestExperimentContext : SCExperimentContext
{
    _Bool _createLinkEnabled;
    _Bool _openLinkEnabled;
    _Bool _addToGroupCTAEnabled;
    _Bool _groupChatEntryPointsEnabled;
}

@property(readonly, nonatomic) _Bool addToGroupCTAEnabled; // @synthesize addToGroupCTAEnabled=_addToGroupCTAEnabled;
@property(readonly, nonatomic) _Bool createLinkEnabled; // @synthesize createLinkEnabled=_createLinkEnabled;
- (id)experimentName;
@property(readonly, nonatomic) _Bool groupChatEntryPointsEnabled; // @synthesize groupChatEntryPointsEnabled=_groupChatEntryPointsEnabled;
@property(readonly, nonatomic) _Bool openLinkEnabled; // @synthesize openLinkEnabled=_openLinkEnabled;
- (void)setupParameters;

@end

