//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCAdsCollectionItemAttachment, SCAdsMediaRenderInfo;

@interface SCAdsCollectionItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasItemAttachment; // @dynamic hasItemAttachment;
@property(nonatomic) _Bool hasItemIcon; // @dynamic hasItemIcon;
@property(retain, nonatomic) SCAdsCollectionItemAttachment *itemAttachment; // @dynamic itemAttachment;
@property(retain, nonatomic) SCAdsMediaRenderInfo *itemIcon; // @dynamic itemIcon;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

