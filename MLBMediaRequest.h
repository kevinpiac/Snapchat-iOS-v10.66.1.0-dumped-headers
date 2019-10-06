//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class MLBMediaFileDeletionRequest, MLBMediaFileMarkTransferredRequest, MLBMediaFileTransferRequest;

@interface MLBMediaRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMediaFileDeletionRequest; // @dynamic hasMediaFileDeletionRequest;
@property(nonatomic) _Bool hasMediaFileMarkTransferredRequest; // @dynamic hasMediaFileMarkTransferredRequest;
@property(nonatomic) _Bool hasMediaFileTransferRequest; // @dynamic hasMediaFileTransferRequest;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) MLBMediaFileDeletionRequest *mediaFileDeletionRequest; // @dynamic mediaFileDeletionRequest;
@property(retain, nonatomic) MLBMediaFileMarkTransferredRequest *mediaFileMarkTransferredRequest; // @dynamic mediaFileMarkTransferredRequest;
@property(retain, nonatomic) MLBMediaFileTransferRequest *mediaFileTransferRequest; // @dynamic mediaFileTransferRequest;
@property(nonatomic) int type; // @dynamic type;

@end

