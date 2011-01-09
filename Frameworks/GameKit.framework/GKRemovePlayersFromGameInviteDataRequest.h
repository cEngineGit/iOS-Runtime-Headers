/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, NSArray;



@interface GKRemovePlayersFromGameInviteDataRequest : GKDataRequest 
{
    NSString *_rid;
    NSArray *_players;
}

@property(retain) NSString *rid;
@property(retain) NSArray *players;


- (id)key;
- (id)request;
- (void)dealloc;
- (id)header;
- (void)setRid:(id)arg1;
- (id)rid;
- (id)players;
- (void)setPlayers:(id)arg1;

@end