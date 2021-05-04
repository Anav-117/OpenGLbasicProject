#version 330 core

out vec4 FragColor;

in vec2 TexCoord;

uniform sampler2D TexColor1;
uniform sampler2D TexColor2;

void main() {
   FragColor = mix(texture(TexColor1, TexCoord), texture(TexColor2, vec2(-TexCoord.x, TexCoord.y)), 0.2);
};