//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ChatRoomMessage.h"

@class NSString, UIImage;

@interface ChatRoomImageMessage : ChatRoomMessage
{
    NSString *_imageUrl;
    UIImage *_image;
    NSString *_longUrl;
    UIImage *_preViewImage;
}

@property(retain, nonatomic) UIImage *preViewImage; // @synthesize preViewImage=_preViewImage;
@property(copy, nonatomic) NSString *longUrl; // @synthesize longUrl=_longUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)savePreImage;
- (void)saveImage;
- (id)shortUrl:(id)arg1;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)userDirectory;
- (id)JSONText;
- (id)initWithChatRoom:(id)arg1;
- (id)initWithConver:(id)arg1;
- (id)initWithFMResultSet:(id)arg1;

@end
