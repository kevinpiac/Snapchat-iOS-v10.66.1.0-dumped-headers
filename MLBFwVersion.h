//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface MLBFwVersion : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *gitBranch; // @dynamic gitBranch;
@property(copy, nonatomic) NSString *gitCommit; // @dynamic gitCommit;
@property(copy, nonatomic) NSString *gitTag; // @dynamic gitTag;
@property(nonatomic) _Bool hasGitBranch; // @dynamic hasGitBranch;
@property(nonatomic) _Bool hasGitCommit; // @dynamic hasGitCommit;
@property(nonatomic) _Bool hasGitTag; // @dynamic hasGitTag;

@end
