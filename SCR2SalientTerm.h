//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCR2SalientTerm : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double cpt; // @dynamic cpt;
@property(retain, nonatomic) NSMutableArray *derivedFromArray; // @dynamic derivedFromArray;
@property(readonly, nonatomic) unsigned long long derivedFromArray_Count; // @dynamic derivedFromArray_Count;
@property(nonatomic) double idf; // @dynamic idf;
@property(nonatomic) double ind; // @dynamic ind;
@property(nonatomic) unsigned int rawUserTf; // @dynamic rawUserTf;
@property(copy, nonatomic) NSString *term; // @dynamic term;
@property(nonatomic) unsigned int tf; // @dynamic tf;

@end

