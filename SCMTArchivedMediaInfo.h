//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCMTArchivedImageMediaInfo, SCMTStreamingMediaInfo;

@interface SCMTArchivedMediaInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMTArchivedImageMediaInfo *imageInfo; // @dynamic imageInfo;
@property(readonly, nonatomic) int infoOneOfCase; // @dynamic infoOneOfCase;
@property(retain, nonatomic) SCMTStreamingMediaInfo *streamingInfo; // @dynamic streamingInfo;

@end

