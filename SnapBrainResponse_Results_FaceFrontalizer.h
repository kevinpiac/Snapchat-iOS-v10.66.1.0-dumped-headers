//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SnapBrainResponse_Results_FaceFrontalizer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *faceVersion; // @dynamic faceVersion;
@property(retain, nonatomic) NSMutableArray *facesArray; // @dynamic facesArray;
@property(readonly, nonatomic) unsigned long long facesArray_Count; // @dynamic facesArray_Count;

@end

