//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCAdsMediaTopSnap, SCAdsWebView;

@interface SCAdsTopSnap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCAdsMediaTopSnap *mediaTopSnap; // @dynamic mediaTopSnap;
@property(copy, nonatomic) NSString *swipeUpArrowText; // @dynamic swipeUpArrowText;
@property(readonly, nonatomic) int topSnapTypeOneOfCase; // @dynamic topSnapTypeOneOfCase;
@property(retain, nonatomic) SCAdsWebView *webviewTopSnap; // @dynamic webviewTopSnap;

@end

